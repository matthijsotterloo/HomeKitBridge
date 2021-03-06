//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface HAKTransportManager : NSObject <NSCopying, NSCoding>
{
    NSMutableSet *_transports;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)transportManagerWithURL:(id)arg1;
+ (id)transportManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSSet *transports; // @synthesize transports=_transports;
- (id)accessories;
- (void)stopAllTransports;
- (void)startAllTransports;
- (void)removeTransport:(id)arg1;
- (void)addTransport:(id)arg1;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

