/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface OAXConnector : NSObject {
}
+ (void)readConnectionFromParent:(xmlNode *)parent nodeName:(const char *)name connection:(id)connection;	// 0x3183c3a1
+ (id)readFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace drawingState:(id)state;	// 0x3183c1d5
+ (void)readNonVisualConnectorProperties:(xmlNode *)properties inNamespace:(id)aNamespace connectorProperties:(id)properties3;	// 0x3183c2ed
@end

