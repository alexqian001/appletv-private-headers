/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVServerRequestHandler : XXUnknownSuperclass {
}
+ (id)sharedInstance;	// 0x28fda9
- (void)handleRequest:(ATVServerRequestRef)request;	// 0x28fe69
- (void)respondToRequest:(ATVServerRequestRef)request httpCode:(unsigned long)code body:(id)body mimeType:(id)type forceEncryption:(BOOL)encryption;	// 0x29012d
@end
