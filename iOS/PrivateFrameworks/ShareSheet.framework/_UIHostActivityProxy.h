/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface _UIHostActivityProxy : NSObject <NSSecureCoding> {
    NSUUID * _activityIdentifierCopy;
    NSUUID * _activityIdentifierOpen;
    NSUUID * _activityIdentifierShare;
    bool  _disabled;
    bool  _favorite;
    NSNumber * _imageSlot;
    NSNumber * _labelSlot;
    bool  _longPressable;
    double  _platterTextHeight;
    NSUUID * _proxyIdentifier;
    bool  _restricted;
}

@property (nonatomic, retain) NSUUID *activityIdentifierCopy;
@property (nonatomic, retain) NSUUID *activityIdentifierOpen;
@property (nonatomic, retain) NSUUID *activityIdentifierShare;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (nonatomic, retain) NSNumber *imageSlot;
@property (nonatomic, retain) NSNumber *labelSlot;
@property (getter=isLongPressable, nonatomic) bool longPressable;
@property (nonatomic) double platterTextHeight;
@property (nonatomic, retain) NSUUID *proxyIdentifier;
@property (getter=isRestricted, nonatomic) bool restricted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityIdentifierCopy;
- (id)activityIdentifierOpen;
- (id)activityIdentifierShare;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageSlot;
- (id)initWithCoder:(id)arg1;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isLongPressable;
- (bool)isRestricted;
- (id)labelSlot;
- (double)platterTextHeight;
- (id)proxyIdentifier;
- (void)setActivityIdentifierCopy:(id)arg1;
- (void)setActivityIdentifierOpen:(id)arg1;
- (void)setActivityIdentifierShare:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setImageSlot:(id)arg1;
- (void)setLabelSlot:(id)arg1;
- (void)setLongPressable:(bool)arg1;
- (void)setPlatterTextHeight:(double)arg1;
- (void)setProxyIdentifier:(id)arg1;
- (void)setRestricted:(bool)arg1;

@end
