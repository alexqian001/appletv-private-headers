/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface EKObjectID : NSObject <NSCopying, NSCoding> {
@private
	BOOL _temporary;	// 4 = 0x4
	int _entityType;	// 8 = 0x8
	int _rowID;	// 12 = 0xc
}
@property(readonly, assign) int entityType;	// G=0x30c50045; converted property
@property(readonly, assign) int rowID;	// G=0x30c0ff3d; converted property
@property(readonly, assign, getter=isTemporary) BOOL temporary;	// G=0x30bf72b9; converted property
+ (id)objectIDWithCADObjectID:(XXStruct_K5nmsA)cadobjectID;	// 0x30bf615d
+ (id)objectIDWithEntityType:(int)entityType rowID:(int)anId;	// 0x30bfb969
+ (id)objectIDWithURL:(id)url;	// 0x30c4fd41
+ (id)temporaryObjectIDWithEntityType:(int)entityType;	// 0x30c05ce5
- (id)initWithCoder:(id)coder;	// 0x30c0f9e9
- (id)initWithEntityType:(int)entityType rowID:(int)anId temporary:(BOOL)temporary;	// 0x30bf61ad
- (XXStruct_K5nmsA)CADObjectID;	// 0x30bf72c9
- (id)URIRepresentation;	// 0x30c500f5
- (id)copyWithZone:(NSZone *)zone;	// 0x30bf69cd
- (id)description;	// 0x30c50055
- (void)encodeWithCoder:(id)coder;	// 0x30bfc0d1
- (id)entityName;	// 0x30bf64a1
// converted property getter: - (int)entityType;	// 0x30c50045
- (unsigned)hash;	// 0x30bf633d
- (BOOL)isEqual:(id)equal;	// 0x30bf6cd9
// converted property getter: - (BOOL)isTemporary;	// 0x30bf72b9
// converted property getter: - (int)rowID;	// 0x30c0ff3d
- (id)stringRepresentation;	// 0x30c50065
@end
