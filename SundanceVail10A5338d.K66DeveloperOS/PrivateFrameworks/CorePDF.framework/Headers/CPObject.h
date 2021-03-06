/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "CPCopying.h"

@class CPPage, NSMutableArray, CPDocument;

@interface CPObject : NSObject <NSCopying, CPCopying> {
	CPObject *parent;	// 4 = 0x4
	NSMutableArray *children;	// 8 = 0x8
	CPDocument *document;	// 12 = 0xc
	CPPage *page;	// 16 = 0x10
	long zOrder;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *children;	// G=0x332c6c75; converted property
@property(retain) CPDocument *document;	// G=0x332c7279; S=0x332c71f5; converted property
@property(retain) CPPage *page;	// G=0x332c74f1; S=0x332c74e1; converted property
@property(retain) CPObject *parent;	// G=0x332c59f1; S=0x332c59e1; converted property
@property(assign) long zOrder;	// G=0x332c7289; S=0x332c738d; converted property
- (id)init;	// 0x332c533d
- (id)initSuper;	// 0x332c53c1
- (void)accept:(id)accept;	// 0x332c71a5
- (void)add:(id)add;	// 0x332c5d79
- (void)add:(id)add atIndex:(unsigned)index;	// 0x332c5f15
- (void)addChildren:(id)children;	// 0x332c614d
- (void)addChildrenOf:(id)of;	// 0x332c6271
- (id)ancestorOfClass:(Class)aClass;	// 0x332c66c5
- (id)childAtIndex:(unsigned)index;	// 0x332c5aa9
// converted property getter: - (id)children;	// 0x332c6c75
- (id)childrenNotOfClass:(Class)aClass;	// 0x332c686d
- (id)childrenOfClass:(Class)aClass;	// 0x332c67b1
- (void)childrenOfClass:(Class)aClass into:(id)into;	// 0x332c6719
- (void)clearCachedInfo;	// 0x332c739d
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x332c56e1
- (id)copyWithZone:(NSZone *)zone;	// 0x332c554d
- (id)copyWithoutChildren;	// 0x332c56b1
- (unsigned)count;	// 0x332c5a01
- (unsigned)countOfClass:(Class)aClass;	// 0x332c5a21
- (unsigned)countOfFirstDescendantsOfClass:(Class)aClass;	// 0x332c70cd
- (void)dealloc;	// 0x332c53ed
- (int)depth;	// 0x332c7569
- (id)descendantsOfClass:(Class)aClass;	// 0x332c6e31
- (id)descendantsOfClass:(Class)aClass deep:(BOOL)deep;	// 0x332c6c85
- (id)descendantsOfClass:(Class)aClass omitTraversing:(Class)traversing;	// 0x332c6e59
- (void)descendantsOfClass:(Class)aClass to:(id)to;	// 0x332c6d8d
- (void)disposeDescendants;	// 0x332c5499
// converted property getter: - (id)document;	// 0x332c7279
- (id)firstChild;	// 0x332c5b85
- (id)firstDescendantOfClass:(Class)aClass;	// 0x332c6f95
- (id)firstDescendantsOfClass:(Class)aClass;	// 0x332c73c1
- (id)firstSibling;	// 0x332c5d29
- (unsigned)indexOf:(id)of;	// 0x332c71a9
- (BOOL)isEqual:(id)equal;	// 0x332c71c9
- (id)lastChild;	// 0x332c5bc9
- (id)lastDescendantOfClass:(Class)aClass;	// 0x332c7039
- (id)lastSibling;	// 0x332c5cdd
- (void)map:(SEL)map target:(id)target;	// 0x332c6b89
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass;	// 0x332c69e5
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass last:(BOOL)last;	// 0x332c6949
- (void)map:(SEL)map target:(id)target last:(BOOL)last;	// 0x332c6bf5
- (void)mapSafely:(SEL)safely target:(id)target childrenOfClass:(Class)aClass;	// 0x332c6a69
- (id)newTakeChildren;	// 0x332c57e9
- (id)newTakeChildrenAmong:(id)among;	// 0x332c58a1
- (id)nextSibling;	// 0x332c5c01
// converted property getter: - (id)page;	// 0x332c74f1
// converted property getter: - (id)parent;	// 0x332c59f1
- (void)performSelector:(SEL)selector;	// 0x332c6929
- (id)previousSibling;	// 0x332c5c79
- (void)promoteChildren;	// 0x332c6605
- (void)recomputeZOrder;	// 0x332c7299
- (void)remove;	// 0x332c64b5
- (void)remove:(id)remove;	// 0x332c6335
- (void)removeAll;	// 0x332c65cd
- (void)removeFirstChild;	// 0x332c6409
- (void)removeLastChild;	// 0x332c6461
- (void)removeObjectAtIndex:(unsigned)index;	// 0x332c64dd
// converted property setter: - (void)setDocument:(id)document;	// 0x332c71f5
// converted property setter: - (void)setPage:(id)page;	// 0x332c74e1
// converted property setter: - (void)setParent:(id)parent;	// 0x332c59e1
// converted property setter: - (void)setZOrder:(long)order;	// 0x332c738d
- (id)shallowDescendantsOfClass:(Class)aClass;	// 0x332c6e45
- (void)updateZOrder:(long)order;	// 0x332c734d
// converted property getter: - (long)zOrder;	// 0x332c7289
@end

