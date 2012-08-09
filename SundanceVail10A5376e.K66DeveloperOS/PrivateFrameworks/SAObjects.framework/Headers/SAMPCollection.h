/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPMediaEntity.h"

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity {
}
@property(copy, nonatomic) NSArray *items;	// G=0x3422c055; S=0x3422c0d1; 
+ (id)collection;	// 0x3422bfc5
+ (id)collectionWithDictionary:(id)dictionary context:(id)context;	// 0x3422c009
- (id)encodedClassName;	// 0x3422bfb9
- (id)groupIdentifier;	// 0x3422bfa9
// declared property getter: - (id)items;	// 0x3422c055
// declared property setter: - (void)setItems:(id)items;	// 0x3422c0d1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3422c139
@end
