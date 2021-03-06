//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HAKConnection.h>

#import "NSStreamDelegate.h"

@class HAKHTTPRequestMessage, HAKSecuritySessionPacket, NSInputStream, NSOutputStream;

@interface HAKHTTPConnection : HAKConnection <NSStreamDelegate>
{
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    id <HAKHTTPConnectionDelegate> _delegate;
    HAKSecuritySessionPacket *_currentPacket;
    HAKHTTPRequestMessage *_currentRequest;
}

@property(retain, nonatomic) HAKHTTPRequestMessage *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) HAKSecuritySessionPacket *currentPacket; // @synthesize currentPacket=_currentPacket;
@property __weak id <HAKHTTPConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_handleIncomingData:(id)arg1;
- (void)_handleHTTPRequestData:(id)arg1;
- (void)_handleCompleteHTTPRequest:(id)arg1;
- (void)sendResponseMessage:(id)arg1;
- (void)_sendResponseData:(id)arg1;
- (void)performConnectionWillClose;
- (BOOL)close;
- (BOOL)open;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

@end

