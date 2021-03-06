/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import </libobjc.A.h>
#import "NSURLConnectionDelegate.h"
#import "WebCore-Structs.h"


@interface WebQuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate> {
	CFURLConnectionRef m_connection;	// 4 = 0x4
	ResourceHandle *m_handle;	// 8 = 0x8
}
- (id)initWithConnection:(CFURLConnectionRef)connection handle:(ResourceHandle *)handle;	// 0x335fc651
- (void)clearHandle;	// 0x335fc7b9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x335fc77d
- (void)connection:(id)connection didReceiveData:(id)data lengthReceived:(long long)received;	// 0x335fc6e1
- (void)connection:(id)connection didReceiveDataArray:(id)array;	// 0x335fc6a5
- (void)connectionDidFinishLoading:(id)connection;	// 0x335fc745
@end

