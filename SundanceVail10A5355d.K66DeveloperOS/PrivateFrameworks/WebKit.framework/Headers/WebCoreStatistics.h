/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebCoreStatistics : NSObject {
}
+ (int)autoreleasedPageCount;	// 0x316a488d
+ (unsigned long)cachedFontDataCount;	// 0x316a441d
+ (unsigned long)cachedFontDataInactiveCount;	// 0x316a442d
+ (int)cachedFrameCount;	// 0x316a487d
+ (int)cachedPageCount;	// 0x316a4871
+ (void)emptyCache;	// 0x31694c29
+ (void)garbageCollectJavaScriptObjects;	// 0x316a43a1
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)debugging;	// 0x316a43b1
+ (unsigned long)glyphPageCount;	// 0x316a4451
+ (unsigned long)iconPageURLMappingCount;	// 0x316a43cd
+ (unsigned long)iconRecordCount;	// 0x316a43f5
+ (unsigned long)iconRetainedPageURLCount;	// 0x316a43e1
+ (unsigned long)iconsWithDataCount;	// 0x316a4409
+ (unsigned long)javaScriptGlobalObjectsCount;	// 0x316a3d1d
+ (unsigned long)javaScriptInterpretersCount;	// 0x316a497d
+ (unsigned long)javaScriptNoGCAllowedObjectsCount;	// 0x316a489d
+ (id)javaScriptObjectTypeCounts;	// 0x316a4191
+ (unsigned long)javaScriptObjectsCount;	// 0x316a3c51
+ (unsigned long)javaScriptProtectedGlobalObjectsCount;	// 0x316a3eb5
+ (id)javaScriptProtectedObjectTypeCounts;	// 0x316a3f81
+ (unsigned long)javaScriptProtectedObjectsCount;	// 0x316a3de9
+ (unsigned long)javaScriptReferencedObjectsCount;	// 0x316a48a1
+ (id)javaScriptRootObjectClasses;	// 0x316a496d
+ (id)javaScriptRootObjectTypeCounts;	// 0x316a498d
+ (id)memoryStatistics;	// 0x316a4601
+ (void)purgeInactiveFontData;	// 0x316a443d
+ (void)returnFreeMemoryToSystem;	// 0x316a486d
+ (void)setCacheDisabled:(BOOL)disabled;	// 0x316a45dd
+ (void)setShouldPrintExceptions:(BOOL)printExceptions;	// 0x316a4515
+ (BOOL)shouldPrintExceptions;	// 0x316a4455
+ (void)startIgnoringWebCoreNodeLeaks;	// 0x316a45f9
+ (id)statistics;	// 0x316a3c35
+ (void)stopIgnoringWebCoreNodeLeaks;	// 0x316a45fd
@end
