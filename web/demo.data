
skyscraper = building_construction.Skyscraper()
skyscraper:setName("Cloud Hugger")

print(skyscraper:getName())

-- Add 99 floors with random carpet colour and no
-- optical cables (gutted)
for i = 0, 10 do
    floor = skyscraper:addFloor()
    floor:setCarpetColour(math.random(0, 255))
    floor:setHasFibre(false)
end

-- Build the penthouse which has red carpet (think Palpatine)
-- and with fibre, because Palpatine likes fast internet.
floor = skyscraper:addFloor()
floor:setCarpetColour(255)
floor:setHasFibre(true)

-- Print the result
skyscraper:print()
