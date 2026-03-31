#include <iostream>
#include "engine.h"

InferenceEngine::InferenceEngine() {
    std::cout << "Engine initialized." << std::endl;
}

InferenceEngine::~InferenceEngine() {}

void InferenceEngine::loadModel(const char* path) {
    std::cout << "Loading model from " << path << std::endl;
}

std::vector<float> InferenceEngine::infer(const std::vector<float>& input) {
    return std::vector<float>(input.size(), 0.0f);
}

int main() {
    InferenceEngine engine;
    engine.loadModel("model.bin");
    std::cout << "Ready for inference." << std::endl;
    return 0;
}
