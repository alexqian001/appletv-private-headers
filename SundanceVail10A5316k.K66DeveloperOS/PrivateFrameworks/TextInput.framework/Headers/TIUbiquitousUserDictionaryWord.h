/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIUserDictionaryWord.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TIUbiquitousUserDictionaryWord : TIUserDictionaryWord {
}
@property(retain) id target;	// G=0x31f46955; S=0x31f46971; converted property
@property(retain, nonatomic) NSNumber *timestamp;	// @dynamic
+ (id)predicateFilteringForSearchText:(id)searchText;	// 0x31f46921
+ (id)predicateMatchingTarget:(id)target shortcut:(id)shortcut;	// 0x31f468e9
+ (id)sortDescriptors;	// 0x31f46821
- (id)changeDescriptionKey:(id)key;	// 0x31f46ae9
- (int)compareTimestamps:(id)timestamps;	// 0x31f46a1d
- (BOOL)hasChangesToTargetOrShortcut;	// 0x31f46a8d
// converted property setter: - (void)setTarget:(id)target;	// 0x31f46971
// converted property getter: - (id)target;	// 0x31f46955
- (void)updateTimestamp;	// 0x31f469d9
@end
