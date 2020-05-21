//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class IOBluetoothSDPDataElement;

@interface IOBluetoothSDPServiceAttribute : NSObject <NSCoding, NSSecureCoding>
{
    unsigned short mAttributeID;
    IOBluetoothSDPDataElement *mAttributeDataElement;
    IOBluetoothSDPDataElement *mAttributeIDDataElement;
    void *_mReserved;
}

+ (id)withID:(unsigned short)arg1 attributeElement:(id)arg2;
+ (id)withID:(unsigned short)arg1 attributeElementValue:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)compareAttributeID:(id)arg1;
- (id)getIDDataElement;
- (id)getDataElement;
- (unsigned short)getAttributeID;
- (void)dealloc;
- (id)initWithID:(unsigned short)arg1 attributeElement:(id)arg2;
- (id)initWithID:(unsigned short)arg1 attributeElementValue:(id)arg2;
- (BOOL)encodeAttribute:(char *)arg1;
- (unsigned int)getEncodedSize;

@end

