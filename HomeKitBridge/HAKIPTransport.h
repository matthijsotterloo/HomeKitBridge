//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HAKTransport.h"

#import "HAKHTTPConnectionDelegate.h"
#import "HAKSocketDelegate.h"

@class HAKNetService, HAKSocket, NSMutableArray, NSNumber, NSThread;

@interface HAKIPTransport : HAKTransport <NSCoding, NSNetServiceDelegate, HAKHTTPConnectionDelegate, HAKSocketDelegate>
{
    BOOL _serverThreadShouldRun;
    HAKSocket *_socket;
    HAKNetService *_netService;
    NSMutableArray *_connections;
    NSThread *_serverThread;
    NSNumber *_configurationNumber;
    NSNumber *_stateNumber;
}

@property BOOL serverThreadShouldRun; // @synthesize serverThreadShouldRun=_serverThreadShouldRun;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(retain, nonatomic) NSNumber *configurationNumber; // @synthesize configurationNumber=_configurationNumber;
@property(retain, nonatomic) NSThread *serverThread; // @synthesize serverThread=_serverThread;
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) HAKNetService *netService; // @synthesize netService=_netService;
@property(retain, nonatomic) HAKSocket *socket; // @synthesize socket=_socket;
- (void)serverThreadMain;
- (void)removeSources;
- (id)_characteristicWriteWithConnection:(id)arg1 attributes:(id)arg2 error:(char *)arg3;
- (void)_handleCharacteristicWriteWithConnection:(id)arg1 body:(id)arg2;
- (id)_characteristicReadWithAccessoryID:(unsigned long long)arg1 characteristicID:(unsigned long long)arg2 metadata:(BOOL)arg3 properties:(BOOL)arg4 type:(BOOL)arg5 events:(BOOL)arg6 error:(char *)arg7;
- (void)_handleCharacteristicReadRequestWithConnection:(id)arg1 query:(id)arg2;
- (void)_handleAllAccessoriesRequestWithConnection:(id)arg1;
- (void)_postRequestWithConnection:(id)arg1 URL:(id)arg2 contentType:(id)arg3 body:(id)arg4;
- (void)_deleteRequestWithConnection:(id)arg1 URL:(id)arg2 contentType:(id)arg3 body:(id)arg4;
- (void)_putRequestWithConnection:(id)arg1 URL:(id)arg2 contentType:(id)arg3 body:(id)arg4;
- (void)_getRequestWithConnection:(id)arg1 URL:(id)arg2;
- (void)identify;
- (id)primaryAccessory;
@property(readonly, nonatomic) unsigned long long port;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1;
- (BOOL)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedConnections:(id)arg3;
- (void)stop;
- (void)start;
- (void)setUsername:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)newConnectionWithInputStream:(id)arg1 outputStream:(id)arg2;
- (BOOL)connectionShouldClose:(id)arg1;
- (void)connection:(id)arg1 receivedRequest:(id)arg2;
- (void)accessory:(id)arg1 didUpdateValue:(id)arg2 forCharacteristic:(id)arg3;
- (void)accessory:(id)arg1 didUpdateService:(id)arg2;
- (void)accessory:(id)arg1 didRemoveService:(id)arg2;
- (void)accessory:(id)arg1 didAddService:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

