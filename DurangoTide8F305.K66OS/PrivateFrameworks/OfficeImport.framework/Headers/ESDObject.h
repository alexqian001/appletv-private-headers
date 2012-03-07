/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ESDContainer;

__attribute__((visibility("hidden")))
@interface ESDObject : NSObject {
@private
	EshObject *mEshObject;	// 4 = 0x4
	ESDContainer *mParent;	// 8 = 0x8
	bool mIsChart;	// 12 = 0xc
}
@property(assign, getter=isChart) bool chart;	// G=0x3443afd1; S=0x344fea21; converted property
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x343ad74d
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x343ac965
- (id)initWithType:(unsigned short)type;	// 0x343ac5b5
- (void)dealloc;	// 0x343b1025
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x343ae2e1
- (EshGroup *)eshGroup;	// 0x34595949
- (EshObject *)eshObject;	// 0x343ac9c1
- (EshShape *)eshShape;	// 0x3443af9d
// converted property getter: - (bool)isChart;	// 0x3443afd1
- (id)parent;	// 0x344c5f11
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x3449dfcd
// converted property setter: - (void)setChart:(bool)chart;	// 0x344fea21
- (long)shapeID;	// 0x34595979
@end
