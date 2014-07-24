/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAnswerStructuredAnswer.h"

@class NSURL, NSString, NSArray;

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer> {
}
@property(copy, nonatomic) NSString *category;	// G=0x326fb365; S=0x326fb381; @dynamic
@property(copy, nonatomic) NSArray *definitionGroups;	// G=0x326fb3d1; S=0x326fb439; 
@property(copy, nonatomic) NSString *phoneticPronunciation;	// G=0x326fb4a1; S=0x326fb4bd; 
@property(copy, nonatomic) NSURL *sound;	// G=0x326fb50d; S=0x326fb589; 
@property(copy, nonatomic) NSArray *syllables;	// G=0x326fb5e9; S=0x326fb605; 
@property(copy, nonatomic) NSString *word;	// G=0x326fb655; S=0x326fb671; 
+ (id)dictionaryStructuredAnswer;	// 0x326fb2d5
+ (id)dictionaryStructuredAnswerWithDictionary:(id)dictionary context:(id)context;	// 0x326fb319
// declared property getter: - (id)category;	// 0x326fb365
// declared property getter: - (id)definitionGroups;	// 0x326fb3d1
- (id)encodedClassName;	// 0x326fb2c9
- (id)groupIdentifier;	// 0x326fb2b9
// declared property getter: - (id)phoneticPronunciation;	// 0x326fb4a1
// declared property setter: - (void)setCategory:(id)category;	// 0x326fb381
// declared property setter: - (void)setDefinitionGroups:(id)groups;	// 0x326fb439
// declared property setter: - (void)setPhoneticPronunciation:(id)pronunciation;	// 0x326fb4bd
// declared property setter: - (void)setSound:(id)sound;	// 0x326fb589
// declared property setter: - (void)setSyllables:(id)syllables;	// 0x326fb605
// declared property setter: - (void)setWord:(id)word;	// 0x326fb671
// declared property getter: - (id)sound;	// 0x326fb50d
// declared property getter: - (id)syllables;	// 0x326fb5e9
// declared property getter: - (id)word;	// 0x326fb655
@end
