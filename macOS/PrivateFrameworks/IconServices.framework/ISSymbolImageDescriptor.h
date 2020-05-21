//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISImageDescriptor.h"

@class NSString;

@interface ISSymbolImageDescriptor : NSObject <ISImageDescriptor>
{
    double _pointSize;
    double _scale;
    unsigned long long _size;
    long long _weight;
}

@property(nonatomic) long long weight; // @synthesize weight=_weight;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

