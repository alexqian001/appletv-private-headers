/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class _NSUndoObject;

__attribute__((visibility("hidden")))
@interface _NSUndoStack : NSObject {
@private
	unsigned _max;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	unsigned _nestingLevel;	// 12 = 0xc
	_NSUndoObject *_head;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x32050431; converted property
@property(assign, getter=isDiscardable) BOOL discardable;	// G=0x32045f61; S=0x320d3251; converted property
@property(retain) id groupIdentifier;	// G=0x320d3221; S=0x32045985; converted property
@property(assign) unsigned max;	// G=0x320d3211; S=0x32043bad; converted property
@property(readonly, assign) unsigned nestingLevel;	// G=0x3204547d; converted property
- (id)init;	// 0x32043b51
- (id)_beginMark;	// 0x32045a25
- (void)_removeBottom;	// 0x320d30f9
// converted property getter: - (unsigned)count;	// 0x32050431
- (void)dealloc;	// 0x3204c981
- (id)description;	// 0x320d3419
// converted property getter: - (id)groupIdentifier;	// 0x320d3221
// converted property getter: - (BOOL)isDiscardable;	// 0x32045f61
- (void)markBegin;	// 0x3204567d
- (void)markEnd;	// 0x32045fa1
// converted property getter: - (unsigned)max;	// 0x320d3211
// converted property getter: - (unsigned)nestingLevel;	// 0x3204547d
- (BOOL)popAndInvoke;	// 0x320d32f1
- (id)popUndoObject;	// 0x3204c9d9
- (void)push:(id)push;	// 0x320456f1
- (void)removeAllObjects;	// 0x32043c95
- (void)removeAllObjectsWithTarget:(id)target;	// 0x32046089
- (void)removeObject:(id)object;	// 0x3204624d
// converted property setter: - (void)setDiscardable:(BOOL)discardable;	// 0x320d3251
// converted property setter: - (void)setGroupIdentifier:(id)identifier;	// 0x32045985
// converted property setter: - (void)setMax:(unsigned)max;	// 0x32043bad
- (id)topUndoObject;	// 0x32045f51
@end
