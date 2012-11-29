/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVContainerInfoTaskGroup.h"

@class NSSet;

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {
	NSSet *_directoryGatewayURLs;	// 68 = 0x44
}
- (id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls directoryGatewayURLs:(id)urls3 taskManager:(id)manager;	// 0x35fe17b9
- (id)_copyContainerParserMappings;	// 0x35fe192d
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;	// 0x35fe18f1
- (int)containerInfoDepthForURL:(id)url;	// 0x35fe18ad
- (void)dealloc;	// 0x35fe1861
@end
