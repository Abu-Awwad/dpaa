
#include <iostream>
#include <string>
#include <cstdint>

namespace AbuAwwad {

class DownloadManager {
private:
    std::string fileName;
    std::uint64_t totalSize = 0;
    std::uint64_t downloadedSize = 0;
    bool active = false;
    bool cancelled = false;

public:

    void setFileInfo(
        const std::string& name,
        std::uint64_t size
    ) {
        fileName = name;
        totalSize = size;
        downloadedSize = 0;
        cancelled = false;
    }

    void start() {
        if (fileName.empty() || totalSize == 0) {
            std::cout << "Invalid file information.\n";
            return;
        }

        active = true;
        cancelled = false;

        std::cout << "Download ready: "
                  << fileName << '\n';
    }

    void updateProgress(std::uint64_t amount) {
        if (!active || cancelled)
            return;

        downloadedSize += amount;

        if (downloadedSize > totalSize)
            downloadedSize = totalSize;

        showProgress();
    }

    void showProgress() const {
        if (totalSize == 0)
            return;

        double percentage =
            (double)downloadedSize /
            (double)totalSize * 100.0;

        std::cout << "Progress: "
                  << percentage << "%\n";
    }

    void cancel() {
        cancelled = true;
        active = false;

        std::cout << "Download cancelled.\n";
    }

    void finish() {
        if (downloadedSize != totalSize || cancelled)
            return;

        active = false;
        std::cout << "Download completed.\n";
    }
};

}
