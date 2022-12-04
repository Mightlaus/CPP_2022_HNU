/*
 * 这是字符串系列练习遇到的一个共性问题：裂解/提取字符串
 * 给定一个固定的字符串，需要我们按照特定的标准把字符串裂解成几个部分，然后提取出这些以便后续操作
 * 如：
 *  a1sadf2sadfasd3slkdfj145 提取其中的整数然后加和
 *  a1.12sadf2sadfasd3.01slk.02dfj14.5 提取其中的数字然后加和
 *  caaac 以aa作为分割符，将其分割为多个子串
 *  123421sdkjflksjSFSDFADSF@$$$ 按类（数字、大写字母、小写字母、其他）分割
 *  123-123+123-123 表达式求值
 *
 *  问题由分隔符类型和待提取字符串类型划分成多类
 *  1. 分隔符 —— 单一(s)、组合(as)、类别(字母)
 *  2. 待提取字符串 —— 单一、组合、类别
 *
 *  但程序核心结构没变：【遍历+两层判断(？分割（？连续）)】
 */


#include <bits/stdc++.h>

using namespace std;

/*
 * 连续整数提取
 *  1. 当前位是否为数字 str[i] is_num?
 *  2. 是否连续 extracting?
 *  3. 末尾数字单独判断
 *
 *  数字 & 连续：    继续提取，len++
 *  数字 & 不连续：   开始提取，len=1
 *  非数字 & 连续：   存放刚提取的，pushback
 *  非数字 & 不连续：  继续找下一个
 */
vector<string> extractInt(string str) {
    vector<string> vec;

    // 提取：需要一个标志来指示当前读取的状态,需要一个变量指示提取长度
    bool extracting = false;
    int len = 0;

    //遍历字符串
    for (int i = 0; i < str.size(); ++i) {
        // 当前位是数字
        if (str[i] >= '0' and str[i] <= '9') {
            // 之前是没有提取的状态，这是数字的第一个字符
            if (!extracting) {
                len = 1;
                extracting = true;
            } else {
                // 之前已经在提取状态了，这不是数字的第一个字符
                len++;
            }
        } else {
            // 当前位不是数字
            if (extracting) {
                // 上一串数字放入vec中
                vec.push_back(str.substr(i - len, len));
            }
            extracting = false;
            continue;
        }
    }

    // 字符串末尾还是数字，单独考虑push入vec中
    if (extracting) {
        vec.push_back(str.substr(str.size() - len, len));
    }

    return vec;
}

/*
 * 连续浮点数提取
 *  其实和整数一样，判断时把小数点也看为数字即可
 *
 * 另外常见的小数表示形式stod()都可以处理stod(3.1) stod(3) stod(0.1) stod(.01)
 */
vector<string> extractFloat(string str) {
    vector<string> vec;
    bool extracting = false;
    int len = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= '0' and str[i] <= '9' or str[i] == '.') {
            if (extracting) {
                extracting = true;
                len++;
            } else {
                extracting = true;
                len = 1;
            }
        } else {
            if (extracting) {
                extracting = false;
                vec.push_back(str.substr(i - len, len));
            } else {
                extracting = false;
                continue;
            }
        }
    }

    if (extracting) {
        vec.push_back((str.substr(str.size() - len, len)));
    }

    return vec;
}


/*
 * 字符串char裂解
 * 总思路与连续数字提取一样，但是在连续判断非提取内容时要push空字符。
 * 当前是否为delimiter符
 *    是 & 连续，i偏移delimiter长度 提取push
 *    是 & 不连续， 两个delimiter连续，push空字符
 */
vector<string> splitChar(string str, char delimiter) {
    vector<string> vec;

    bool extracting = false;
    int len = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == delimiter) {
            if (extracting) {
                vec.push_back(str.substr(i - len, len));
                extracting = false;
            } else {
                vec.push_back("");
            }
        } else {
            if (extracting) {
                len++;
            } else {
                extracting = true;
                len = 1;
            }
        }
    }

    if (extracting) {
        vec.push_back(str.substr(str.size() - len, len));
    }

    return vec;
}

/*
 * 字符串string裂解
 * 总思路与连续数字提取一样，但是在连续判断非提取内容时要push空字符。
 *  1. 当前是否为delimiter (str.find(delimiter, i)==i)
 *  2. 是否连续
 */
vector<string> splitStr(string str, string delimiter) {
    vector<string> vec;

    bool extracting = false;
    int len = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str.find(delimiter, i) == i) {
            if (extracting) {
                extracting = false;
                vec.push_back(str.substr(i - len, len));
            } else {
                extracting = false;
                vec.push_back("");
            }
            i += delimiter.size() - 1; // 由于for循环i会自加，所以这里减一
        } else {
            if (extracting) {
                extracting = true;
                len++;
            } else {
                extracting = true;
                len = 1;
            }
        }
    }

    if (extracting) {
        vec.push_back(str.substr(str.size() - len, len));
    }

    return vec;
}

/*
 * 字符串类裂解
 * 本质上是分类问题，所以字符串里没有舍弃的部分，只需要判断分界线。相对来说反而更容易了
 *  1. extracting永远是true，直接省略。
 *  2. 末尾处也不需要再判定，直接push
 *
 */
int category(char c) {
    if (c >= '0' and c <= '9') return 1;
    if (c >= 'a' and c <= 'z') return 2;
    if (c >= 'A' and c <= 'Z') return 3;
    return 0;
}

vector<string> splitCategory(string str) {
    vector<string> vec;

    int len = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (i == 0) {
            // 先判断0元素。默认可以直接提取即len=1
            len = 1;
            continue;
        }

        if (category(str[i]) == category(str[i - 1])) {
            len++;
        } else {
            vec.push_back(str.substr(i - len, len));
            len = 1;
        }
    }

    vec.push_back(str.substr(str.size() - len, len));

    return vec;
}


/*
 * 表达式求值
 * 总思路与提取数字一样，只是提取是要向前多考虑一位符号
 *  1. 当前是否为数字
 *  2. 是否连续
 *
 * 另外stoi()可以处理带符号和空格的string，stoi(+10), stoi(-10), stoi( -10    )
 */
vector<string> exprEval(string str) {
    vector<string> vec;

    // 预处理，把第一个数前加上正号
    str = "+" + str;

    bool extracting = false;
    int len = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= '0' and str[i] <= '9') {
            if (extracting) {
                extracting = true;
                len++;
            } else {
                extracting = true;
                len = 1;
            }
        } else {
            if (extracting) {
                extracting = false;
                vec.push_back(str.substr(i - len - 1, len + 1));
            } else {
                extracting = false;
                continue;
            }
        }
    }

    if (extracting) {
        vec.push_back(str.substr(str.size() - len - 1, len + 1));
    }

    return vec;
}

/*
 * ---------------------------------advanced-----------------------------
 */

// 只是字符串分割字符串可以组合使用find, erase, substr方法
vector<string> splitStr_ad(string str, string delimiter) {
    vector<string> vec;

    int pos = 0;
    while (pos != -1 and str.size() > 0) {
        pos = str.find(delimiter);
        vec.push_back(str.substr(0, pos)); // substr(0, -1) return a copy of all the characters starting at 0
        str.erase(0, pos + delimiter.size());
    }

    return vec;
}


int main() {
    string str("caaac");
    string delimiter("a");
    auto vec = splitStr_ad(str, delimiter);

    for (auto s: vec) {
        cout << s << endl;
    }

}
