//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/NSCopying-Protocol.h>
#import <ProVideo/NSSecureCoding-Protocol.h>

@interface PAEColorSelectionChannelData : NSObject <NSSecureCoding, NSCopying>
{
    int _mode;
    int _state;
    int _action;
    int _style;
    double _x;
    double _y;
    double _radius;
    double _radiusScale;
    double _frame;
    int _timeScale;
}

+ (BOOL)supportsSecureCoding;
@property int timeScale; // @synthesize timeScale=_timeScale;
@property double frame; // @synthesize frame=_frame;
@property double radiusScale; // @synthesize radiusScale=_radiusScale;
@property double radius; // @synthesize radius=_radius;
@property double y; // @synthesize y=_y;
@property double x; // @synthesize x=_x;
@property int style; // @synthesize style=_style;
@property int action; // @synthesize action=_action;
@property int state; // @synthesize state=_state;
@property int mode; // @synthesize mode=_mode;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

