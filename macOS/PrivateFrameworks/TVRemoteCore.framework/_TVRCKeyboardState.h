//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, TVRCKeyboardAttributes;

@interface _TVRCKeyboardState : NSObject <NSSecureCoding>
{
    BOOL _isEditing;
    TVRCKeyboardAttributes *_attributes;
    NSString *_text;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyboardStateFromDevice:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) TVRCKeyboardAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

