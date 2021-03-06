/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class NSString;

@interface TSUTemporaryDirectory : NSObject {
	NSString *_path;	// 4 = 0x4
	BOOL _leak;	// 8 = 0x8
}
@property(readonly, retain) NSString *path;	// G=0x3197a8b5; converted property
- (id)init;	// 0x3197a6e5
- (id)initWithSignature:(id)signature;	// 0x3197a701
- (void)_createDirectoryWithSignature:(id)signature;	// 0x3197a8d9
- (void)dealloc;	// 0x3197a801
- (void)leakTemporaryDirectory;	// 0x3197a8c5
// converted property getter: - (id)path;	// 0x3197a8b5
@end

