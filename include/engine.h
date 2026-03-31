#ifndef ENGINE_H
#define ENGINE_H

#include <vector>

class InferenceEngine {
public:
    InferenceEngine();
    ~InferenceEngine();
    void loadModel(const char* path);
    std::vector<float> infer(const std::vector<float>& input);
};

#endif // ENGINE_H
