/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSDate;

@interface SANoteObject : SADomainObject {
}
@property(copy, nonatomic) NSString *contents;	// G=0x353c9b5d; S=0x353c9b79; 
@property(copy, nonatomic) NSDate *createdDate;	// G=0x353c9bc9; S=0x353c9be5; 
@property(copy, nonatomic) NSDate *lastModifiedDate;	// G=0x353c9c35; S=0x353c9c51; 
@property(copy, nonatomic) NSString *title;	// G=0x353c9ca1; S=0x353c9cbd; 
+ (id)object;	// 0x353c9acd
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x353c9b11
// declared property getter: - (id)contents;	// 0x353c9b5d
// declared property getter: - (id)createdDate;	// 0x353c9bc9
- (id)encodedClassName;	// 0x353c9ac1
- (id)groupIdentifier;	// 0x353c9ab1
// declared property getter: - (id)lastModifiedDate;	// 0x353c9c35
// declared property setter: - (void)setContents:(id)contents;	// 0x353c9b79
// declared property setter: - (void)setCreatedDate:(id)date;	// 0x353c9be5
// declared property setter: - (void)setLastModifiedDate:(id)date;	// 0x353c9c51
// declared property setter: - (void)setTitle:(id)title;	// 0x353c9cbd
// declared property getter: - (id)title;	// 0x353c9ca1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353c9d0d
@end
