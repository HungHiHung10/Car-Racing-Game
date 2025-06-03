# Car-Racing-Game
a video game genre in which the player participates in a racing competition.

```.txt
D:/
├── .vscode/                    # Cấu hình VSCode (nếu dùng)
├── assets/                    # Tài nguyên game
│   ├── fonts/                # Font chữ
│   └── images/               # Hình ảnh
├── build/                     # Thư mục biên dịch (tạo bởi CMake)
├── docs/                      # Tài liệu dự án
├── external/                  # Thư viện bên ngoài
│   └── SFML/                 # Thư mục chứa SFML
│       ├── bin/             # Thư mục nhị phân
│       ├── doc/             # Tài liệu SFML
│       ├── examples/        # Ví dụ từ SFML
│       ├── include/         # Header files của SFML
│       └── lib/             # Thư viện liên kết
├── include/                   # Header files của dự án
│   └── CarRacingGame/       # Namespace dự án
│       ├── Game.hpp        # Interface cho logic game
│       ├── Player.hpp      # Interface cho xe đua của người chơi
│       ├── Renderer.hpp    # Interface cho hệ thống đồ họa
│       ├── EventManager.hpp # Interface cho quản lý sự kiện
│       └── ResourceManager.hpp # Interface cho quản lý tài nguyên
├── src/                       # Source code
│   ├── core/               # Logic cốt lõi
│   │   ├── Game.cpp        # Triển khai logic game
│   │   └── Player.cpp      # Triển khai xe đua
│   ├── graphics/           # Logic đồ họa
│   │   └── Renderer.cpp    # Triển khai renderer
│   ├── event/              # Quản lý sự kiện
│   │   └── EventManager.cpp # Triển khai quản lý sự kiện
│   ├── resources/          # Quản lý tài nguyên
│   │   └── ResourceManager.cpp # Triển khai quản lý tài nguyên
│   └── main.cpp            # Điểm vào chương trình
├── tests/                     # Thư mục kiểm tra
│   └── test_core/          # Kiểm tra logic cốt lõi
│       └── test_game.cpp   # Kiểm tra Game.cpp
├── CMakeLists.txt            # File cấu hình CMake
├── .gitignore                # File bỏ qua cho Git
└── README.md                 # Tài liệu hướng dẫn
```
