/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMNodeIterator : DOMObject {
}
@property(readonly, assign) BOOL expandEntityReferences;	// G=0x361f4b15; 
@property(readonly, assign) id<DOMNodeFilter> filter;	// G=0x361f4a11; 
@property(readonly, assign) BOOL pointerBeforeReferenceNode;	// G=0x361f4c49; 
@property(readonly, assign) DOMNode *referenceNode;	// G=0x361f4b45; 
@property(readonly, assign) DOMNode *root;	// G=0x361f48e1; 
@property(readonly, assign) unsigned whatToShow;	// G=0x361f49e5; 
- (void)dealloc;	// 0x360b0be9
- (void)detach;	// 0x360b0d2d
// declared property getter: - (BOOL)expandEntityReferences;	// 0x361f4b15
// declared property getter: - (id)filter;	// 0x361f4a11
- (void)finalize;	// 0x361f47c5
- (id)nextNode;	// 0x360af919
// declared property getter: - (BOOL)pointerBeforeReferenceNode;	// 0x361f4c49
- (id)previousNode;	// 0x361f4c79
// declared property getter: - (id)referenceNode;	// 0x361f4b45
// declared property getter: - (id)root;	// 0x361f48e1
// declared property getter: - (unsigned)whatToShow;	// 0x361f49e5
@end
