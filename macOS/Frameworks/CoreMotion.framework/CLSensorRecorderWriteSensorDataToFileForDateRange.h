//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface CLSensorRecorderWriteSensorDataToFileForDateRange : NSObject <NSSecureCoding>
{
    int _dataType;
    double _startTime;
    double _endTime;
}

+ (BOOL)supportsSecureCoding;
@property int dataType; // @synthesize dataType=_dataType;
@property double endTime; // @synthesize endTime=_endTime;
@property double startTime; // @synthesize startTime=_startTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

