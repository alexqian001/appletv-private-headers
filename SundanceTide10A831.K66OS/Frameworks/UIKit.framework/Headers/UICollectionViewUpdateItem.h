/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSIndexPath;

@interface UICollectionViewUpdateItem : NSObject {
	NSIndexPath *_initialIndexPath;	// 4 = 0x4
	NSIndexPath *_finalIndexPath;	// 8 = 0x8
	int _updateAction;	// 12 = 0xc
	id _gap;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSIndexPath *indexPathAfterUpdate;	// G=0x31ff6209; @synthesize=_finalIndexPath
@property(readonly, assign, nonatomic) NSIndexPath *indexPathBeforeUpdate;	// G=0x31ff61f9; @synthesize=_initialIndexPath
@property(readonly, assign, nonatomic) int updateAction;	// G=0x31ff6219; @synthesize=_updateAction
- (id)initWithAction:(int)action forIndexPath:(id)indexPath;	// 0x31ff5f0d
- (id)initWithInitialIndexPath:(id)initialIndexPath finalIndexPath:(id)path updateAction:(int)action;	// 0x31ff5e81
- (id)initWithOldIndexPath:(id)oldIndexPath newIndexPath:(id)path;	// 0x31ff5f3d
- (int)_action;	// 0x31ff60ed
- (id)_gap;	// 0x31ff612d
- (id)_indexPath;	// 0x31ff60fd
- (BOOL)_isSectionOperation;	// 0x31ff614d
- (id)_newIndexPath;	// 0x31ff5fc5
- (void)_setGap:(id)gap;	// 0x31ff613d
- (void)_setNewIndexPath:(id)path;	// 0x31ff5ffd
- (int)compareIndexPaths:(id)paths;	// 0x31ff6181
- (void)dealloc;	// 0x31ff5f61
- (id)description;	// 0x31ff6041
// declared property getter: - (id)indexPathAfterUpdate;	// 0x31ff6209
// declared property getter: - (id)indexPathBeforeUpdate;	// 0x31ff61f9
- (int)inverseCompareIndexPaths:(id)paths;	// 0x31ff61bd
// declared property getter: - (int)updateAction;	// 0x31ff6219
@end

