Pod::Spec.new do |s|
    s.name         = ‘GYBankCardIdentity’
    s.version      = '3.1.12'
    s.summary      = 'An easy way to use pull-to-refresh'
    s.homepage     = 'https://github.com/Galen5Yang/GYBankCardIdentity'
    s.license      = 'MIT'
    s.authors      = {'Galen5Yang' => 'bingyu1392@163.com'}
    s.platform     = :ios, '6.0'
    s.source       = {:git => 'https://github.com/Galen5Yang/GYBankCardIdentity.git', :tag => s.version}
    s.source_files = 'GYBankCardIdentity/**/*.{h,m}'
    s.requires_arc = true
end