//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class HAKCharacteristic;

@protocol HAKCharacteristicDelegate <NSObject>

@optional
- (void)characteristic:(HAKCharacteristic *)arg1 didWriteValue:(id)arg2;
- (void)characteristic:(HAKCharacteristic *)arg1 didUpdateValue:(id)arg2;
@end

