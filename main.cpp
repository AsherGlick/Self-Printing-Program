#include <iostream>
#include <string>
using namespace std;
int main() {
  string output = "#include <iostream>\n#include <string>\nusing namespace std;\nint main() {\n  string output = \"\";\n  cout << output.substr(0,91);\n  for (int i = 0; i < output.size(); i++) {\n    if (output[i] == '\\n') {\n      cout << \"\\\\n\";\n    }else if (output[i] == '\\\"') {\n      cout << \"\\\\\\\"\";\n    }else if (output[i] == '\\\\') {\n      cout << \"\\\\\\\\\";\n    }else {\n      cout << output[i];\n    }\n  }\n  cout << output.substr(91,output.size()-91);\n  return 0;\n}";
  cout << output.substr(0,91);
  for (int i = 0; i < output.size(); i++) {
    if (output[i] == '\n') {
      cout << "\\n";
    }else if (output[i] == '\"') {
      cout << "\\\"";
    }else if (output[i] == '\\') {
      cout << "\\\\";
    }else {
      cout << output[i];
    }
  }
  cout << output.substr(91,output.size()-91);
  return 0;
}
