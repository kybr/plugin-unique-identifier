#include <JuceHeader.h>

#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    return 1;
  }
  juce::AudioPluginFormatManager manager;
  manager.addDefaultFormats();
  juce::String file(argv[1]);
  juce::OwnedArray<juce::PluginDescription> description;
//  for (int i = 0; i < manager.getNumFormats(); i++) {
//    auto* format = manager.getFormat(i);
//    format->findAllTypesForFile(description, file);
//    printf("%d\n", description.size());
//    for (int k = 0; k < description.size(); k++) {
//      printf("%x\n", description[0]->uniqueId);
//      return 0;
//    }
//  }
  auto* format = manager.getFormat(0);
  format->findAllTypesForFile(description, file);
  printf("%x\n", description[0]->uniqueId);
}
