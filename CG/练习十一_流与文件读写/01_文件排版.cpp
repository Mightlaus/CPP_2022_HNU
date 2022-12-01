#include "iostream"
#include "string"
#include "fstream"

using namespace std;
/*
 * 1. 删头尾
 * 2. 压缩中间
 * 3. 拼接输出
 *
 * 写函数吧，整洁易读
 *
 * 注意string的方法
 * .find .erase .insert .substr
 * substr的时候在纸上画一画
 */
void strip(string &str)
{
    int head=-1, tail=-1;

    // 找到头和尾
    for(int i=0; i<str.size(); ++i)
    {
        if(str[i]!='\t' and str[i]!= ' ' and head<0)
        {
            head = i;
        }

        if(str[str.size()-i-1]!='\t' and str[str.size()-i-1]!=' ' and tail<0)
        {
            tail = str.size() - i - 1;
        }
    }

    str = str.substr(head, tail - head + 1);

}

void condense_space(string &str)
{
    for(int i=10; i>=2; --i)
    {
        string tmp;
        for(int j=0; j<i; ++j)
        {
            tmp += " ";
        }

        while(1)
        {
            int pos = str.find(tmp);
            if(pos==-1) break;
            str.erase(pos, i);
            str.insert(pos, " ");
        }

    }
}

void remove_tab(string &str)
{
    while(1)
    {
        int pos = str.find('\t');
        if(pos==-1) break;
        str.erase(pos, 1);
        str.insert(pos, " ");
    }
}



int main()
{
    int n;
    cin >> n;

    fstream outFile;
    outFile.open("listout.txt", ios::out);

    fstream inFile;
    inFile.open("listin.txt", ios::in);

    bool first=1;
    // 一直读到文件结尾
    while(!inFile.eof())
    {
        string curLine;
        getline(inFile, curLine);
        if(!curLine.empty())
        {
            strip(curLine);
            int plc = curLine.find(':');
            string part1, part2;

            part1 = curLine.substr(0, plc);
            strip(part1);
            remove_tab(part1);
            condense_space(part1);

            part2 = curLine.substr(plc+1, curLine.size()-plc);
            strip(part2);
            remove_tab(part2);
            condense_space(part2);

            if(!first)
            {
                outFile<<endl;
            }
            first = 0;
            outFile << part1;

            //xxxxx(size)___(n-2)
            for(int i=part1.size()+1; i<=n-2; ++i)
            {
                outFile<<' ';
            }

            outFile<<" : ";
            outFile<<part2;

        }

    }
}
