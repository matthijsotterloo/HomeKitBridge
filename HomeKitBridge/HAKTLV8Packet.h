//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class NSData;

@interface HAKTLV8Packet : NSObject
{
    unsigned char _type;
    NSData *_value;
}

@property(readonly) unsigned char type; // @synthesize type=_type;
@property(readonly) NSData *value; // @synthesize value=_value;
@property(readonly) unsigned char length;
- (id)description;
- (id)initWithType:(unsigned char)arg1 value:(id)arg2;

@end

