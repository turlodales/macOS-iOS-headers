//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface CLSensorRecorderSensorDataRequestById : NSObject <NSSecureCoding>
{
    int _dataType;
    unsigned long long _identifier;
    unsigned long long _metaIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property int dataType; // @synthesize dataType=_dataType;
@property unsigned long long metaIdentifier; // @synthesize metaIdentifier=_metaIdentifier;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

