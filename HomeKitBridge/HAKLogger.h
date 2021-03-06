//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class NSMutableSet;

@interface HAKLogger : NSObject
{
    unsigned long long _logLevel;
    NSObject<OS_dispatch_queue> *_loggerQueue;
    struct __aslclient *_aslClient;
    NSMutableSet *_loggerFileHandles;
}

+ (id)defaultLogger;
@property(retain, nonatomic) NSMutableSet *loggerFileHandles; // @synthesize loggerFileHandles=_loggerFileHandles;
@property(setter=setASLClient:) struct __aslclient *aslClient; // @synthesize aslClient=_aslClient;
@property(retain) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
- (void)logMessage:(id)arg1 level:(unsigned long long)arg2;
- (void)logWithLevel:(unsigned long long)arg1 message:(id)arg2;
- (BOOL)addLogFile:(id)arg1 error:(id *)arg2;
- (void)addDefaultFileLogger;
- (id)logDirectory;
- (void)dealloc;
- (id)init;

@end

