/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class DOMNode, NSString;

@interface DOMRange : DOMObject {
}
@property(readonly, assign) BOOL collapsed;	// G=0x31948e3d; 
@property(readonly, retain) DOMNode *commonAncestorContainer;	// G=0x31c2218d; 
@property(readonly, retain) DOMNode *endContainer;	// G=0x31b37bed; 
@property(readonly, assign) int endOffset;	// G=0x31b37cc1; 
@property(readonly, retain) DOMNode *startContainer;	// G=0x31b32f89; 
@property(readonly, assign) int startOffset;	// G=0x31b37b21; 
@property(readonly, copy) NSString *text;	// G=0x31b2ff8d; 
- (id)_text;	// 0x31bc5b75
- (CGRect)boundingBox;	// 0x31bc74c1
- (id)cloneContents;	// 0x31c215bd
- (id)cloneRange;	// 0x31c211b5
- (void)collapse:(BOOL)collapse;	// 0x31c21ae1
// declared property getter: - (BOOL)collapsed;	// 0x31948e3d
// declared property getter: - (id)commonAncestorContainer;	// 0x31c2218d
- (short)compareBoundaryPoints:(unsigned short)points :(id)arg2;	// 0x31c21925
- (short)compareBoundaryPoints:(unsigned short)points sourceRange:(id)range;	// 0x31b3e941
- (short)compareNode:(id)node;	// 0x31c20ccd
- (short)comparePoint:(id)point offset:(int)offset;	// 0x31c20bed
- (id)createContextualFragment:(id)fragment;	// 0x31c20e85
- (void)dealloc;	// 0x31951a35
- (void)deleteContents;	// 0x31c2185d
- (id)description;	// 0x31bc5ac1
- (void)detach;	// 0x31b35ce1
// declared property getter: - (id)endContainer;	// 0x31b37bed
// declared property getter: - (int)endOffset;	// 0x31b37cc1
- (void)expand:(id)expand;	// 0x31c209c5
- (void)extend:(unsigned long)extend inDirection:(int)direction;	// 0x31c28a4d
- (id)extractContents;	// 0x31c2170d
- (void)finalize;	// 0x31c22261
- (id)firstNode;	// 0x31c28ec1
- (void)insertNode:(id)node;	// 0x31c21461
- (BOOL)intersectsNode:(id)node;	// 0x31c20da9
- (BOOL)isPointInRange:(id)range offset:(int)offset;	// 0x31c20b0d
- (id)lineBoxRects;	// 0x31bc5ab1
- (void)move:(unsigned long)move inDirection:(int)direction;	// 0x31c285bd
- (void)selectNode:(id)node;	// 0x31b41825
- (void)selectNodeContents:(id)contents;	// 0x31c21a09
- (void)setEnd:(id)end :(int)arg2;	// 0x31c21d6d
- (void)setEnd:(id)end offset:(int)offset;	// 0x31c21ecd
- (void)setEndAfter:(id)after;	// 0x31b2fe19
- (void)setEndBefore:(id)before;	// 0x31c21bbd
- (void)setStart:(id)start :(int)arg2;	// 0x31c2202d
- (void)setStart:(id)start offset:(int)offset;	// 0x31b3d639
- (void)setStartAfter:(id)after;	// 0x31c21c95
- (void)setStartBefore:(id)before;	// 0x31b2fa61
// declared property getter: - (id)startContainer;	// 0x31b32f89
// declared property getter: - (int)startOffset;	// 0x31b37b21
- (void)surroundContents:(id)contents;	// 0x31c21305
// declared property getter: - (id)text;	// 0x31b2ff8d
- (id)textRects;	// 0x31bc72b1
- (id)toString;	// 0x31c21059
@end
