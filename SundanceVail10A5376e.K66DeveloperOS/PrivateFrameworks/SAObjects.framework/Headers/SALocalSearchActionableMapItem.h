/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SALocalSearchMapItem.h"

@class NSArray;

@interface SALocalSearchActionableMapItem : SALocalSearchMapItem {
}
@property(copy, nonatomic) NSArray *commands;	// G=0x3424c4c5; S=0x3424c52d; 
+ (id)actionableMapItem;	// 0x3424c435
+ (id)actionableMapItemWithDictionary:(id)dictionary context:(id)context;	// 0x3424c479
// declared property getter: - (id)commands;	// 0x3424c4c5
- (id)encodedClassName;	// 0x3424c429
- (id)groupIdentifier;	// 0x3424c419
// declared property setter: - (void)setCommands:(id)commands;	// 0x3424c52d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3424c595
@end
