//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSString;

@interface HMDFieldWrapper : HMFObject
{
    long long _tlvid;
    NSString *_name;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long tlvid; // @synthesize tlvid=_tlvid;
- (id)initWithTlvId:(unsigned long long)arg1 name:(id)arg2;

@end

