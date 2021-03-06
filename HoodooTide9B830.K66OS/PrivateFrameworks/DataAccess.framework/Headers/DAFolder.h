/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAFolder : NSObject {
	NSString *_folderName;	// 4 = 0x4
	NSString *_folderID;	// 8 = 0x8
	NSString *_parentFolderID;	// 12 = 0xc
	int _dataclass;	// 16 = 0x10
	BOOL _isDefault;	// 20 = 0x14
	BOOL _hasRemoteChanges;	// 21 = 0x15
}
@property(assign) int dataclass;	// G=0x3258b965; S=0x3258b975; @synthesize=_dataclass
@property(copy) NSString *folderID;	// G=0x3258b8f5; S=0x3258b909; @synthesize=_folderID
@property(copy) NSString *folderName;	// G=0x3258b8bd; S=0x3258b8d1; @synthesize=_folderName
@property(assign) BOOL hasRemoteChanges;	// G=0x3258b9a5; S=0x3258b9b5; @synthesize=_hasRemoteChanges
@property(assign) BOOL isDefault;	// G=0x3258b985; S=0x3258b995; @synthesize=_isDefault
@property(copy) NSString *parentFolderID;	// G=0x3258b92d; S=0x3258b941; @synthesize=_parentFolderID
// declared property getter: - (int)dataclass;	// 0x3258b965
- (void)dealloc;	// 0x3258b67d
- (id)description;	// 0x3258b6f1
// declared property getter: - (id)folderID;	// 0x3258b8f5
// declared property getter: - (id)folderName;	// 0x3258b8bd
// declared property getter: - (BOOL)hasRemoteChanges;	// 0x3258b9a5
- (unsigned)hash;	// 0x3258b7ad
// declared property getter: - (BOOL)isDefault;	// 0x3258b985
- (BOOL)isEqual:(id)equal;	// 0x3258b7cd
- (id)mailboxID;	// 0x32587895
// declared property getter: - (id)parentFolderID;	// 0x3258b92d
- (id)parentMailboxID;	// 0x325878a9
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x3258b975
// declared property setter: - (void)setFolderID:(id)anId;	// 0x3258b909
// declared property setter: - (void)setFolderName:(id)name;	// 0x3258b8d1
// declared property setter: - (void)setHasRemoteChanges:(BOOL)changes;	// 0x3258b9b5
// declared property setter: - (void)setIsDefault:(BOOL)aDefault;	// 0x3258b995
// declared property setter: - (void)setParentFolderID:(id)anId;	// 0x3258b941
@end

