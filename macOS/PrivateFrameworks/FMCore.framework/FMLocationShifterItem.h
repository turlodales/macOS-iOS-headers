//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError;

@interface FMLocationShifterItem : NSObject
{
    BOOL _shifted;
    double _accuracy;
    NSDate *_timestamp;
    id _context;
    NSError *_error;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL shifted; // @synthesize shifted=_shifted;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)description;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 accuracy:(double)arg2 timestamp:(id)arg3 context:(id)arg4;
- (id)init;

@end

