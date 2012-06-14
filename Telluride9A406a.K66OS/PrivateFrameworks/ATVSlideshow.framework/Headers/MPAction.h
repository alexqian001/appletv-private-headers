/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MCAction, NSString;
@protocol MPActionSupport;

@interface MPAction : NSObject <NSCoding, NSCopying> {
	NSObject<MPActionSupport> *_parentObject;	// 4 = 0x4
	MCAction *_action;	// 8 = 0x8
	NSObject *_targetObject;	// 12 = 0xc
	NSString *_uuid;	// 16 = 0x10
}
@property(retain) id parent;	// G=0x348f19e9; S=0x348f1b51; converted property
@property(retain, nonatomic) NSObject *targetObject;	// G=0x348f1659; S=0x348f1765; @synthesize=_targetObject
@property(readonly, assign) NSString *uuid;	// G=0x348f1d39; @synthesize=_uuid
+ (id)action;	// 0x348f14e9
- (id)init;	// 0x348f152d
- (id)initWithCoder:(id)coder;	// 0x348f15b9
- (void)configureTarget;	// 0x348f1bad
- (id)copyWithZone:(NSZone *)zone;	// 0x348f1929
- (void)dealloc;	// 0x348f181d
- (void)encodeWithCoder:(id)coder;	// 0x348f18b1
- (id)key;	// 0x348f199d
// converted property getter: - (id)parent;	// 0x348f19e9
- (id)parentDocument;	// 0x348f19f9
- (void)setAction:(id)action;	// 0x348f1cd5
// converted property setter: - (void)setParent:(id)parent;	// 0x348f1b51
// declared property setter: - (void)setTargetObject:(id)object;	// 0x348f1765
// declared property getter: - (id)targetObject;	// 0x348f1659
// declared property getter: - (id)uuid;	// 0x348f1d39
@end
