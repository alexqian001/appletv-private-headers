/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFile.h"

@class NSString;

@interface PTPCameraFile : ICCameraFile {
	void *_ptpCameraFileProperties;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
}
@property(copy) id info;	// G=0x34205fd1; S=0x34205fe5; 
@property(readonly, assign) unsigned long objHandle;	// G=0x34205fbd; 
@property(retain) NSString *path;	// G=0x34206d9d; S=0x34206db1; @synthesize=_path
@property(readonly, assign) unsigned long storageID;	// G=0x34205fa9; 
@property(readonly, assign) unsigned type;	// G=0x34205f95; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x34205e79
- (void)dealloc;	// 0x34205edd
- (void)finalize;	// 0x34205f39
// declared property getter: - (id)info;	// 0x34205fd1
- (id)metadataDict;	// 0x34206539
// declared property getter: - (unsigned long)objHandle;	// 0x34205fbd
// declared property getter: - (id)path;	// 0x34206d9d
// declared property setter: - (void)setInfo:(id)info;	// 0x34205fe5
// declared property setter: - (void)setPath:(id)path;	// 0x34206db1
// declared property getter: - (unsigned long)storageID;	// 0x34205fa9
- (id)thumbData;	// 0x342061a1
// declared property getter: - (unsigned)type;	// 0x34205f95
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x34206029
@end
