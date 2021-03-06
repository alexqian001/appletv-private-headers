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
@property(readonly, assign) unsigned count;	// G=0x31a2f3f1; converted property
@property(assign, getter=isDiscardable) BOOL discardable;	// G=0x31a24dc5; S=0x31ab855d; converted property
@property(retain) id groupIdentifier;	// G=0x31ab852d; S=0x31a247c5; converted property
@property(assign) unsigned max;	// G=0x31ab8519; S=0x31a22cb9; converted property
@property(readonly, assign) unsigned nestingLevel;	// G=0x31a2429d; converted property
- (id)init;	// 0x31a22c5d
- (id)_beginMark;	// 0x31a24865
- (void)_removeBottom;	// 0x31ab8401
// converted property getter: - (unsigned)count;	// 0x31a2f3f1
- (void)dealloc;	// 0x31a2b8d1
- (id)description;	// 0x31ab8731
// converted property getter: - (id)groupIdentifier;	// 0x31ab852d
// converted property getter: - (BOOL)isDiscardable;	// 0x31a24dc5
- (void)markBegin;	// 0x31a244a5
- (void)markEnd;	// 0x31a24e0d
// converted property getter: - (unsigned)max;	// 0x31ab8519
// converted property getter: - (unsigned)nestingLevel;	// 0x31a2429d
- (BOOL)popAndInvoke;	// 0x31ab85fd
- (id)popUndoObject;	// 0x31a2b92d
- (void)push:(id)push;	// 0x31a2451d
- (void)removeAllObjects;	// 0x31a22dad
- (void)removeAllObjectsWithTarget:(id)target;	// 0x31a24efd
- (void)removeObject:(id)object;	// 0x31a25099
// converted property setter: - (void)setDiscardable:(BOOL)discardable;	// 0x31ab855d
// converted property setter: - (void)setGroupIdentifier:(id)identifier;	// 0x31a247c5
// converted property setter: - (void)setMax:(unsigned)max;	// 0x31a22cb9
- (id)topUndoObject;	// 0x31a24db5
@end

