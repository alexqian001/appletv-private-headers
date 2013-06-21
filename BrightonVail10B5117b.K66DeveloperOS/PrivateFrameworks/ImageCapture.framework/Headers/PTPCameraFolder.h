/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFolder.h"

@class NSString;

@interface PTPCameraFolder : ICCameraFolder {
	void *_ptpCameraFolderProperties;	// 20 = 0x14
	NSString *_path;	// 24 = 0x18
}
@property(copy) id info;	// G=0x343e2bd5; S=0x343e2be9; 
@property(readonly, assign) unsigned long objHandle;	// G=0x343e2bc1; 
@property(retain) NSString *path;	// G=0x343e4e41; S=0x343e4e55; @synthesize=_path
@property(readonly, assign) unsigned long storageID;	// G=0x343e2bad; 
@property(readonly, assign) unsigned type;	// G=0x343e2b99; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x343e2a7d
- (void)dealloc;	// 0x343e2ae1
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x343e2c2d
- (id)description;	// 0x343e4d75
- (void)enumerateContent;	// 0x343e33f5
- (void)finalize;	// 0x343e2b3d
- (id)folderForObjectHandle:(unsigned long)objectHandle;	// 0x343e2fc5
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)objectHandleCreatingIfNeeded addUsedObjectIDs:(id)ids numFoldersCreated:(int *)created;	// 0x343e30e1
- (BOOL)hasDCIMParent;	// 0x343e3319
// declared property getter: - (id)info;	// 0x343e2bd5
- (id)itemForObjectHandle:(unsigned long)objectHandle;	// 0x343e2dc5
// declared property getter: - (unsigned long)objHandle;	// 0x343e2bc1
// declared property getter: - (id)path;	// 0x343e4e41
- (void)refreshInfo;	// 0x343e2d5d
// declared property setter: - (void)setInfo:(id)info;	// 0x343e2be9
// declared property setter: - (void)setPath:(id)path;	// 0x343e4e55
// declared property getter: - (unsigned long)storageID;	// 0x343e2bad
// declared property getter: - (unsigned)type;	// 0x343e2b99
@end
