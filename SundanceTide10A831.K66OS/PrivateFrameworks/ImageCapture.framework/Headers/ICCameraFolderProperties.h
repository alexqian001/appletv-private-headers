/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ICCameraFolderProperties : NSObject {
	NSMutableArray *_files;	// 4 = 0x4
	NSMutableArray *_folders;	// 8 = 0x8
}
@property(retain) NSMutableArray *files;	// G=0x33fe912d; S=0x33fe9141; @synthesize=_files
@property(retain) NSMutableArray *folders;	// G=0x33fe9165; S=0x33fe9179; @synthesize=_folders
- (void)dealloc;	// 0x33fe907d
// declared property getter: - (id)files;	// 0x33fe912d
- (void)finalize;	// 0x33fe90d5
// declared property getter: - (id)folders;	// 0x33fe9165
// declared property setter: - (void)setFiles:(id)files;	// 0x33fe9141
// declared property setter: - (void)setFolders:(id)folders;	// 0x33fe9179
@end
