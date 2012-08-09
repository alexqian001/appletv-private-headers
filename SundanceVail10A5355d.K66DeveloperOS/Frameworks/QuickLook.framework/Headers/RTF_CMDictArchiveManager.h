/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "RTF_CMArchiveManager.h"

@class NSMutableString, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RTF_CMDictArchiveManager : RTF_CMArchiveManager {
	NSMutableString *mCssString;	// 32 = 0x20
	NSMutableDictionary *mStyleCache;	// 36 = 0x24
	NSMutableDictionary *mResources;	// 40 = 0x28
	NSString *mPrefix;	// 44 = 0x2c
	NSString *mResourceUrlProtocol;	// 48 = 0x30
	NSMutableString *mMainHtml;	// 52 = 0x34
	NSString *mName;	// 56 = 0x38
	bool mIsFrameset;	// 60 = 0x3c
}
- (id)initWithName:(id)name resourcePathPrefix:(id)prefix;	// 0x341c62ed
- (id)addCssStyle:(id)style;	// 0x341c6891
- (void)addCssStyle:(id)style withName:(id)name;	// 0x341c6969
- (id)copyDictionaryWithSizeInfos:(BOOL)sizeInfos;	// 0x341c66c9
- (id)cssStylesheetString;	// 0x341c6a99
- (void)dealloc;	// 0x341c6405
- (id)name;	// 0x341c64a5
- (id)newResourceWithName:(id)name;	// 0x341c64b5
- (void)pushCssToPath:(id)path;	// 0x341c69c1
- (void)pushData:(id)data toPath:(id)path;	// 0x341c6575
- (void)pushText:(id)text toPath:(id)path;	// 0x341c664d
- (int)resourceCount;	// 0x341c6861
- (id)resourceUrlProtocol;	// 0x341c6881
- (void)setIsFrameset;	// 0x341c6491
@end
