//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface TKSmartCardATRInterfaceGroup : NSObject
{
    NSNumber *_ABC[3];
    NSNumber *_protocol;
}

@property(readonly, nonatomic) NSNumber *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (id)description;
- (id)parseWithY:(char *)arg1 toProtocol:(id *)arg2 fromSource:(CDUnknownBlockType)arg3 hasNext:(char *)arg4;
- (id)initWithProtocol:(id)arg1;
@property(readonly, nonatomic) NSNumber *TC;
@property(readonly, nonatomic) NSNumber *TB;
@property(readonly, nonatomic) NSNumber *TA;

@end

