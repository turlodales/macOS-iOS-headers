//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

__attribute__((visibility("hidden")))
@interface VKLabelExternalIconElement : NSObject <NSSecureCoding>
{
    struct LabelExternalIconElement _element;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (const struct LabelExternalIconElement *)element;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIconElement:(const struct LabelExternalIconElement *)arg1;

@end

