//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HAKBoolCharacteristic.h"

@class NSTimer;

@interface HAKIdentifyCharacteristic : HAKBoolCharacteristic
{
    NSTimer *_resetTimer;
}

+ (unsigned long long)properties;
+ (id)type;
+ (void)performBlockOnTimerThread:(id)arg1;
+ (void)executeBlockOnTimerThread:(id)arg1;
+ (void)timerThreadMain;
+ (void)createTimerThreadIfNeeded;
@property(retain) NSTimer *resetTimer; // @synthesize resetTimer=_resetTimer;
- (void)_reset:(id)arg1;
- (void)scheduleResetTimer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)handleValueUpdate:(id)arg1 connection:(id)arg2;
@property(readonly, nonatomic, getter=isIdentifying) BOOL identify;
- (id)init;

@end

