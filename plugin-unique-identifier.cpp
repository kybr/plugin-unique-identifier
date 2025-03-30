#include <JuceHeader.h>

#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("juid <plugin-path>\n");
    exit(2);
  }
  juce::AudioPluginFormatManager manager;
  manager.addDefaultFormats();
  juce::String file(argv[1]);
  juce::OwnedArray<juce::PluginDescription> description;
  auto* format = manager.getFormat(0);
  format->findAllTypesForFile(description, file);
  printf("%x\n", description[0]->uniqueId);
}
